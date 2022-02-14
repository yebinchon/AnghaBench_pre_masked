
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WaitEventSet ;
struct TYPE_3__ {int pgConn; } ;
typedef TYPE_1__ MultiConnection ;


 int FUNC_0 (int *,int,int,int *,void*) ;
 int * FUNC_1 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static WaitEventSet *
FUNC_3(MultiConnection **VAR_8, int VAR_9,
      int VAR_10)
{
 int VAR_11 = VAR_9 - VAR_10;
 WaitEventSet *VAR_12 = ((void*)0);
 int VAR_13 = 0;





 if (VAR_11 > VAR_1 - 3)
 {
  VAR_11 = VAR_1 - 3;
 }



 VAR_12 = FUNC_1(VAR_0, VAR_11 + 2);

 for (VAR_13 = 0; VAR_13 < VAR_11; VAR_13++)
 {
  MultiConnection *VAR_14 = VAR_8[VAR_10 +
              VAR_13];
  int VAR_15 = FUNC_2(VAR_14->pgConn);





  int VAR_16 = VAR_6 | VAR_7;

  FUNC_0(VAR_12, VAR_16, VAR_15, ((void*)0), (void *) VAR_14);
 }





 FUNC_0(VAR_12, VAR_5, VAR_3, ((void*)0), ((void*)0));
 FUNC_0(VAR_12, VAR_4, VAR_3, VAR_2, ((void*)0));

 return VAR_12;
}
