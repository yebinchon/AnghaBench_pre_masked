
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_vid_hdr {int dummy; } ;
struct ubi_device {int vid_hdr_shift; } ;


 int FUNC_0 (void*) ;

__attribute__((used)) static inline void FUNC_1(const struct ubi_device *VAR_0,
        struct ubi_vid_hdr *VAR_1)
{
 void *VAR_2 = VAR_1;

 if (!VAR_2)
  return;

 FUNC_0(VAR_2 - VAR_0->vid_hdr_shift);
}
