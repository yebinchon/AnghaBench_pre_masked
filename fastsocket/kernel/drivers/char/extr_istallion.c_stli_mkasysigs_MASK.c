
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sigvalue; int signal; } ;
typedef TYPE_1__ asysigs_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_1(asysigs_t *VAR_2, int VAR_3, int VAR_4)
{
 FUNC_0(VAR_2, 0, sizeof(asysigs_t));
 if (VAR_3 >= 0) {
  VAR_2->signal |= VAR_0;
  VAR_2->sigvalue |= ((VAR_3 > 0) ? VAR_0 : 0);
 }
 if (VAR_4 >= 0) {
  VAR_2->signal |= VAR_1;
  VAR_2->sigvalue |= ((VAR_4 > 0) ? VAR_1 : 0);
 }
}
