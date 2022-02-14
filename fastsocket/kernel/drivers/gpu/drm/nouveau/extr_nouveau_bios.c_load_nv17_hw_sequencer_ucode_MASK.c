
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
struct nvbios {int length; int data; } ;
struct drm_device {int dummy; } ;
typedef int hwsq_signature ;


 int FUNC_0 (int ,int ,char const*,int const) ;
 int FUNC_1 (struct drm_device*,struct nvbios*,int,int ) ;

__attribute__((used)) static int FUNC_2(struct drm_device *VAR_0,
     struct nvbios *VAR_1)
{
 const uint8_t VAR_2[] = { 'H', 'W', 'S', 'Q' };
 const int VAR_3 = sizeof(VAR_2);
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1->data, VAR_1->length, VAR_2, VAR_3);
 if (!VAR_4)
  return 0;


 return FUNC_1(VAR_0, VAR_1, VAR_4 + VAR_3, 0);
}
