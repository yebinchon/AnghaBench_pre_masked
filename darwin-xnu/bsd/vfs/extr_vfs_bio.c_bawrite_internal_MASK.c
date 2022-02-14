
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* vnode_t ;
typedef TYPE_2__* buf_t ;
struct TYPE_7__ {int b_flags; TYPE_1__* b_vp; } ;
struct TYPE_6__ {scalar_t__ v_numoutput; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*,scalar_t__,int ,int ,char const*) ;

__attribute__((used)) static int
FUNC_3(buf_t VAR_3, int VAR_4)
{
 vnode_t VAR_5 = VAR_3->b_vp;

 if (VAR_5) {
         if (VAR_4)




          (void)FUNC_2(VAR_5, VAR_2, 0, 0, (const char *)"buf_bawrite");
  else if (VAR_5->v_numoutput >= VAR_2)




          return (VAR_1);
 }
 FUNC_0(VAR_3->b_flags, VAR_0);

 return (FUNC_1(VAR_3));
}
