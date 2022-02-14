
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_connector {scalar_t__ status; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static bool FUNC_0(struct drm_connector *VAR_2, bool VAR_3)
{
 bool VAR_4;

 if (VAR_3)
  VAR_4 = VAR_2->status == VAR_0;
 else
  VAR_4 = VAR_2->status != VAR_1;

 return VAR_4;
}
