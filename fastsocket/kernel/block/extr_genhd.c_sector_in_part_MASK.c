
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hd_struct {scalar_t__ start_sect; scalar_t__ nr_sects; } ;
typedef scalar_t__ sector_t ;



__attribute__((used)) static inline int FUNC_0(struct hd_struct *VAR_0, sector_t VAR_1)
{
 return VAR_0->start_sect <= VAR_1 &&
  VAR_1 < VAR_0->start_sect + VAR_0->nr_sects;
}
