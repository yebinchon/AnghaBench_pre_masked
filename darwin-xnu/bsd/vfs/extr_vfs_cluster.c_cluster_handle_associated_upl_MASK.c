
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int upl_t ;
typedef int upl_size_t ;
typedef int upl_page_info_t ;
typedef int upl_offset_t ;
struct clios {int io_mtxp; } ;
typedef int kern_return_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int,int,int ,scalar_t__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *,int const) ;
 int FUNC_11 (int *,int const,int) ;
 int FUNC_12 (int ,int *) ;

__attribute__((used)) static void FUNC_13(struct clios *VAR_4, upl_t VAR_5,
            upl_offset_t VAR_6, upl_size_t VAR_7)
{
 if (!VAR_7)
  return;

 upl_t VAR_8 = FUNC_7(VAR_5);

 if (!VAR_8)
  return;
 upl_page_info_t *VAR_9 = FUNC_0(VAR_5);
 bool VAR_10 = FUNC_10(VAR_9, 0);

 if (VAR_10) {
  upl_page_info_t *VAR_11 = FUNC_0(VAR_8);

  upl_offset_t VAR_12 = VAR_6 + VAR_7;
  FUNC_1(VAR_12 >= VAR_2);

  upl_size_t VAR_13 = FUNC_9(VAR_8);







  FUNC_1(VAR_6);
  if (VAR_6)
   VAR_6 = FUNC_5(VAR_6 - 1);

  FUNC_2(&VAR_4->io_mtxp);


  if (VAR_6
   && !FUNC_10(VAR_11, VAR_6 >> VAR_1)) {




   FUNC_11(VAR_11, VAR_6 >> VAR_1, 1);
   VAR_6 += VAR_2;
  }
  if (VAR_12 > VAR_13)
   VAR_12 = VAR_13;
  else {
   VAR_12 = FUNC_5(VAR_12);
   const int VAR_14 = (VAR_12 >> VAR_1) - 1;

   if (!FUNC_10(VAR_11, VAR_14)) {




    FUNC_11(VAR_11, VAR_14, 1);
    VAR_12 -= VAR_2;
   }
  }

  FUNC_3(&VAR_4->io_mtxp);





  if (VAR_12 <= VAR_6)
   return;

  VAR_7 = VAR_12 - VAR_6;
 } else {
  FUNC_1(!(VAR_6 & VAR_0));
  FUNC_1(!(VAR_7 & VAR_0));
 }

 boolean_t VAR_15;





 kern_return_t VAR_16 = FUNC_6(VAR_8, VAR_6, VAR_7,
            VAR_3, &VAR_15);

 FUNC_1(!VAR_16);

 if (!VAR_16 && VAR_15) {
  FUNC_12(VAR_5, ((void*)0));
  FUNC_8(VAR_8);
 }
}
