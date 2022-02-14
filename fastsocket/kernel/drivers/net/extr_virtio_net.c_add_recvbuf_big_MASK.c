
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtnet_info {int rvq; } ;
struct virtio_net_hdr {int dummy; } ;
struct scatterlist {int dummy; } ;
struct page {unsigned long private; } ;
struct padded_vnet_hdr {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct page* FUNC_0 (struct virtnet_info*,int ) ;
 int FUNC_1 (struct virtnet_info*,struct page*) ;
 char* FUNC_2 (struct page*) ;
 int FUNC_3 (struct scatterlist*,char*,int) ;
 int FUNC_4 (int ,struct scatterlist*,int ,int,struct page*) ;

__attribute__((used)) static int FUNC_5(struct virtnet_info *VAR_3, gfp_t VAR_4)
{
 struct scatterlist VAR_5[VAR_1 + 2];
 struct page *VAR_6, *VAR_7 = ((void*)0);
 char *VAR_8;
 int VAR_9, VAR_10, VAR_11;


 for (VAR_9 = VAR_1 + 1; VAR_9 > 1; --VAR_9) {
  VAR_6 = FUNC_0(VAR_3, VAR_4);
  if (!VAR_6) {
   if (VAR_7)
    FUNC_1(VAR_3, VAR_7);
   return -VAR_0;
  }
  FUNC_3(&VAR_5[VAR_9], FUNC_2(VAR_6), VAR_2);


  VAR_6->private = (unsigned long)VAR_7;
  VAR_7 = VAR_6;
 }

 VAR_6 = FUNC_0(VAR_3, VAR_4);
 if (!VAR_6) {
  FUNC_1(VAR_3, VAR_7);
  return -VAR_0;
 }
 VAR_8 = FUNC_2(VAR_6);



 FUNC_3(&VAR_5[0], VAR_8, sizeof(struct virtio_net_hdr));


 VAR_11 = sizeof(struct padded_vnet_hdr);
 FUNC_3(&VAR_5[1], VAR_8 + VAR_11, VAR_2 - VAR_11);


 VAR_6->private = (unsigned long)VAR_7;
 VAR_10 = FUNC_4(VAR_3->rvq, VAR_5, 0, VAR_1 + 2,
           VAR_6);
 if (VAR_10 < 0)
  FUNC_1(VAR_3, VAR_6);

 return VAR_10;
}
