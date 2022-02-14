
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u16 ;
struct sg_io_hdr {int dummy; } ;
struct nvme_ns {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct nvme_ns*,struct sg_io_hdr*,int *,size_t) ;
 int FUNC_1 (struct nvme_ns*,struct sg_io_hdr*,int *,size_t) ;
 int FUNC_2 (struct nvme_ns*,struct sg_io_hdr*,int *,int ) ;
 int FUNC_3 (struct nvme_ns*,struct sg_io_hdr*,int *,size_t) ;

__attribute__((used)) static int FUNC_4(struct nvme_ns *VAR_5, struct sg_io_hdr *VAR_6,
         u8 *VAR_7, int VAR_8)
{
 int VAR_9 = VAR_4;
 u16 VAR_10 = 0;
 u16 VAR_11, VAR_12, VAR_13;

 VAR_11 = VAR_10 + VAR_0;
 VAR_12 = VAR_11 + VAR_1;
 VAR_13 = VAR_12 + VAR_3;

 VAR_9 = FUNC_0(VAR_5, VAR_6, &VAR_7[VAR_10],
     VAR_0);
 if (VAR_9 != VAR_4)
  goto out;
 VAR_9 = FUNC_1(VAR_5, VAR_6, &VAR_7[VAR_11],
     VAR_1);
 if (VAR_9 != VAR_4)
  goto out;
 VAR_9 = FUNC_3(VAR_5, VAR_6, &VAR_7[VAR_12],
     VAR_3);
 if (VAR_9 != VAR_4)
  goto out;
 VAR_9 = FUNC_2(VAR_5, VAR_6, &VAR_7[VAR_13],
     VAR_2);
 if (VAR_9 != VAR_4)
  goto out;

 out:
 return VAR_9;
}
