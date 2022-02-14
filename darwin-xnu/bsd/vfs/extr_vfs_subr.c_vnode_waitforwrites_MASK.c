
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* vnode_t ;
struct timespec {int tv_sec; int tv_nsec; } ;
typedef int caddr_t ;
struct TYPE_5__ {int v_numoutput; int v_lock; int v_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int,int,int,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int *,int,char const*,struct timespec*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

int
FUNC_4(vnode_t VAR_7, int VAR_8, int VAR_9, int VAR_10, const char *VAR_11) {
        int VAR_12 = 0;
 struct timespec VAR_13;

 FUNC_0(0x3010280 | VAR_1, (int)VAR_7, VAR_8, VAR_7->v_numoutput, 0, 0);

 if (VAR_7->v_numoutput > VAR_8) {

         VAR_9 |= VAR_3;

         FUNC_2(VAR_7);

  while ((VAR_7->v_numoutput > VAR_8) && VAR_12 == 0) {
          if (VAR_8)
           VAR_7->v_flag |= VAR_6;
   else
           VAR_7->v_flag |= VAR_5;

   VAR_13.tv_sec = (VAR_10/100);
   VAR_13.tv_nsec = (VAR_10 % 1000) * 10 * VAR_2 * 1000 ;
   VAR_12 = FUNC_1((caddr_t)&VAR_7->v_numoutput, &VAR_7->v_lock, (VAR_9 | (VAR_4 + 1)), VAR_11, &VAR_13);

   FUNC_2(VAR_7);
  }
  FUNC_3(VAR_7);
 }
 FUNC_0(0x3010280 | VAR_0, (int)VAR_7, VAR_8, VAR_7->v_numoutput, VAR_12, 0);

 return VAR_12;
}
