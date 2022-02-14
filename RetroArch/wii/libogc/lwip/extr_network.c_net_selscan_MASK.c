
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netsocket {scalar_t__ sendevt; scalar_t__ rcvevt; scalar_t__ lastdata; } ;
typedef scalar_t__ s32 ;
typedef int fd_set ;


 scalar_t__ FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (scalar_t__,int *) ;
 int FUNC_2 (int *) ;
 struct netsocket* FUNC_3 (scalar_t__) ;

__attribute__((used)) static s32 FUNC_4(s32 VAR_0,fd_set *VAR_1,fd_set *VAR_2,fd_set *VAR_3)
{
 s32 VAR_4,VAR_5 = 0;
 fd_set VAR_6,VAR_7,VAR_8;
 struct netsocket *VAR_9;

 FUNC_2(&VAR_6);
 FUNC_2(&VAR_7);
 FUNC_2(&VAR_8);

 for(VAR_4=0;VAR_4<VAR_0;VAR_4++) {
  if(FUNC_0(VAR_4,VAR_1)) {
   VAR_9 = FUNC_3(VAR_4);
   if(VAR_9 && (VAR_9->lastdata || VAR_9->rcvevt)) {
    FUNC_1(VAR_4,&VAR_6);
    VAR_5++;
   }
  }
  if(FUNC_0(VAR_4,VAR_2)) {
   VAR_9 = FUNC_3(VAR_4);
   if(VAR_9 && VAR_9->sendevt) {
    FUNC_1(VAR_4,&VAR_7);
    VAR_5++;
   }
  }
 }
 *VAR_1 = VAR_6;
 *VAR_2 = VAR_7;
 FUNC_2(VAR_3);

 return VAR_5;
}
