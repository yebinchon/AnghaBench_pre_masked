
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int* vec3_t ;
struct TYPE_4__ {int stopevent; } ;
typedef TYPE_1__ aas_clientmove_t ;
struct TYPE_5__ {int (* Print ) (int ,char*) ;} ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,int,int*,int ,int ,int*,int*,int,int,float,int ,int ,int ) ;
 int FUNC_2 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (int*,int,int*) ;
 TYPE_2__ VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int ,char*) ;

void FUNC_7(int VAR_6, vec3_t VAR_7, vec3_t VAR_8)
{
 vec3_t VAR_9, VAR_10;
 aas_clientmove_t VAR_11;

 FUNC_3(VAR_9);
 if (!FUNC_2(VAR_7)) VAR_8[2] = 0;
 FUNC_4(VAR_8);
 FUNC_5(VAR_8, 400, VAR_10);
 VAR_10[2] = 224;
 FUNC_0();
 FUNC_1(&VAR_11, VAR_6, VAR_7, VAR_0, VAR_5,
         VAR_9, VAR_10, 13, 13, 0.1f, VAR_2, 0, VAR_5);
 if (VAR_11.stopevent & VAR_3)
 {
  VAR_4.Print(VAR_1, "leave ground\n");
 }
}
