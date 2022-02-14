
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int off_t ;
struct TYPE_4__ {TYPE_1__* methods; } ;
struct TYPE_3__ {int mled_status; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_2(char *VAR_2, char **VAR_3, off_t VAR_4, int VAR_5, int *VAR_6,
        void *VAR_7)
{
 return FUNC_1(VAR_2, "%d\n",
         FUNC_0(VAR_1->methods->mled_status, VAR_0));
}
