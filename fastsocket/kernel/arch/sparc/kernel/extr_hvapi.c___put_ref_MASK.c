
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct api_info {scalar_t__ refcnt; scalar_t__ minor; scalar_t__ major; int group; } ;


 int FUNC_0 (int ,int ,int ,unsigned long*) ;

__attribute__((used)) static void FUNC_1(struct api_info *VAR_0)
{
 if (--VAR_0->refcnt == 0) {
  unsigned long VAR_1;

  FUNC_0(VAR_0->group, 0, 0, &VAR_1);
  VAR_0->major = VAR_0->minor = 0;
 }
}
