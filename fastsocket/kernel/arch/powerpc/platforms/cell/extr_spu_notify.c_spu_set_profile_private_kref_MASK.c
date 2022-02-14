
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spu_context {void (* prof_priv_release ) (struct kref*) ;struct kref* prof_priv_kref; } ;
struct kref {int dummy; } ;



void FUNC_0(struct spu_context *VAR_0,
      struct kref *VAR_1,
      void (* VAR_2) (struct kref *VAR_3))
{
 VAR_0->prof_priv_kref = VAR_1;
 VAR_0->prof_priv_release = VAR_2;
}
