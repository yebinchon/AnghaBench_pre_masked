
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct gfs2_rgrpd {scalar_t__ rd_data0; scalar_t__ rd_data; } ;



__attribute__((used)) static inline int FUNC_0(struct gfs2_rgrpd *VAR_0, u64 VAR_1)
{
 u64 VAR_2 = VAR_0->rd_data0;
 u64 VAR_3 = VAR_2 + VAR_0->rd_data;
 return VAR_2 <= VAR_1 && VAR_1 < VAR_3;
}
