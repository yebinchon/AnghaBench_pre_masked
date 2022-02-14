
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sg_io_hdr {int dummy; } ;
struct nvme_ns {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (struct sg_io_hdr*,int *,int) ;

__attribute__((used)) static int FUNC_4(struct nvme_ns *VAR_8, struct sg_io_hdr *VAR_9,
     int VAR_10)
{
 int VAR_11 = VAR_6;
 int VAR_12;
 u8 *VAR_13;

 VAR_13 = FUNC_1(VAR_3, VAR_1);
 if (VAR_13 == ((void*)0)) {
  VAR_11 = -VAR_0;
  goto out_mem;
 }

 VAR_13[0] = VAR_4;

 VAR_13[3] = VAR_7;
 VAR_13[4] = VAR_4;
 VAR_13[5] = VAR_2;
 VAR_13[6] = VAR_5;

 VAR_12 = FUNC_2(VAR_10, VAR_3);
 VAR_11 = FUNC_3(VAR_9, VAR_13, VAR_12);

 FUNC_0(VAR_13);
 out_mem:
 return VAR_11;
}
