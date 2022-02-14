
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct b43_wldev {TYPE_1__* key; } ;
struct TYPE_2__ {int * keyconf; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (struct b43_wldev*) ;
 int FUNC_3 (struct b43_wldev*,int,int ,int *,int ,int *) ;

__attribute__((used)) static int FUNC_4(struct b43_wldev *VAR_3, int VAR_4)
{
 if (FUNC_1((VAR_4 < 0) || (VAR_4 >= FUNC_0(VAR_3->key))))
  return -VAR_2;
 FUNC_3(VAR_3, VAR_4, VAR_0,
       ((void*)0), VAR_1, ((void*)0));
 if ((VAR_4 <= 3) && !FUNC_2(VAR_3)) {
  FUNC_3(VAR_3, VAR_4 + 4, VAR_0,
        ((void*)0), VAR_1, ((void*)0));
 }
 VAR_3->key[VAR_4].keyconf = ((void*)0);

 return 0;
}
