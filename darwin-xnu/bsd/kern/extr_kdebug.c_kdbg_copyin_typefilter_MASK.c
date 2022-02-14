
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int user_addr_t ;
typedef int * typefilter_t ;
struct TYPE_2__ {int kdebug_iops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *,size_t) ;
 TYPE_1__ VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_6 ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int ,int *) ;
 int * FUNC_7 () ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int
FUNC_9(user_addr_t VAR_7, size_t VAR_8)
{
 int VAR_9 = VAR_2;
 typefilter_t VAR_10;

 FUNC_4();

 if (VAR_8 != VAR_3) {
  return VAR_1;
 }

 if ((VAR_10 = FUNC_7())) {
  if ((VAR_9 = FUNC_0(VAR_7, VAR_10, VAR_3)) == 0) {

   FUNC_5(VAR_10, VAR_0);
   if (!VAR_6) {
    if ((VAR_9 = FUNC_2(VAR_10))) {
     return VAR_9;
    }
    VAR_10 = ((void*)0);
   } else {
    FUNC_6(VAR_6, VAR_10);
   }

   FUNC_1();
   FUNC_3(VAR_5.kdebug_iops, VAR_4, VAR_6);
  }

  if (VAR_10)
   FUNC_8(VAR_10);
 }

 return VAR_9;
}
