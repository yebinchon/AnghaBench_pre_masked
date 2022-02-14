
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_device {int cap_mask; } ;
struct dma_chan {struct dma_device* device; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,char*,char*,char*,char*,char*,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_2(struct dma_chan *VAR_6, char *VAR_7)
{
 struct dma_device *VAR_8 = VAR_6->device;

 return FUNC_1(VAR_7, "copy%s%s%s%s%s%s\n",
         FUNC_0(VAR_2, VAR_8->cap_mask) ? " pq" : "",
         FUNC_0(VAR_3, VAR_8->cap_mask) ? " pq_val" : "",
         FUNC_0(VAR_4, VAR_8->cap_mask) ? " xor" : "",
         FUNC_0(VAR_5, VAR_8->cap_mask) ? " xor_val" : "",
         FUNC_0(VAR_1, VAR_8->cap_mask) ? " fill" : "",
         FUNC_0(VAR_0, VAR_8->cap_mask) ? " intr" : "");

}
