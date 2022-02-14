
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void ubi_vid_hdr ;
struct ubi_device {int vid_hdr_shift; int vid_hdr_alsize; } ;
typedef int gfp_t ;


 void* FUNC_0 (int ,int ) ;

__attribute__((used)) static inline struct ubi_vid_hdr *
FUNC_1(const struct ubi_device *VAR_0, gfp_t VAR_1)
{
 void *VAR_2;

 VAR_2 = FUNC_0(VAR_0->vid_hdr_alsize, VAR_1);
 if (!VAR_2)
  return ((void*)0);





 return VAR_2 + VAR_0->vid_hdr_shift;
}
