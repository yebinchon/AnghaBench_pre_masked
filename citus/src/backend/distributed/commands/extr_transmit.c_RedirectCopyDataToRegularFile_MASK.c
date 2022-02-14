
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ len; int data; } ;
typedef TYPE_1__* StringInfo ;
typedef int FileCompat ;
typedef int File ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char const*,int const,int const) ;
 int FUNC_3 (int *,int ,scalar_t__,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 () ;
 int FUNC_9 (char*) ;
 TYPE_1__* FUNC_10 () ;
 int FUNC_11 (TYPE_1__*) ;

void
FUNC_12(const char *VAR_9)
{
 StringInfo VAR_10 = FUNC_10();
 bool VAR_11 = 0;
 const int VAR_12 = (VAR_1 | VAR_2 | VAR_3 | VAR_4 | VAR_5);
 const int VAR_13 = (VAR_7 | VAR_8);
 File VAR_14 = FUNC_2(VAR_9, VAR_12, VAR_13);
 FileCompat VAR_15 = FUNC_1(VAR_14);

 FUNC_6();

 VAR_11 = FUNC_5(VAR_10);
 while (!VAR_11)
 {

  if (VAR_10->len > 0)
  {
   int VAR_16 = FUNC_3(&VAR_15, VAR_10->data,
             VAR_10->len, VAR_6);

   if (VAR_16 != VAR_10->len)
   {
    FUNC_7(VAR_0, (FUNC_8(),
        FUNC_9("could not append to received file: %m")));
   }
  }

  FUNC_11(VAR_10);
  VAR_11 = FUNC_5(VAR_10);
 }

 FUNC_4(VAR_10);
 FUNC_0(VAR_14);
}
