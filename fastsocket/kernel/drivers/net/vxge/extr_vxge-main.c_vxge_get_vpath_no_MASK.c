
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct vxgedev {int no_of_vpath; int* vpath_selector; } ;
struct tcphdr {int dest; int source; } ;
struct sk_buff {int protocol; } ;
struct iphdr {int frag_off; int ihl; scalar_t__ protocol; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 struct iphdr* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static u32 FUNC_3(struct vxgedev *VAR_4, struct sk_buff *VAR_5,
 int *VAR_6)
{
 u16 VAR_7, VAR_8 = 0;
 if (VAR_5->protocol == FUNC_0(VAR_0)) {
  struct iphdr *VAR_9;
  struct tcphdr *VAR_10;

  VAR_9 = FUNC_1(VAR_5);

  if ((VAR_9->frag_off & FUNC_0(VAR_3|VAR_2)) == 0) {
   VAR_10 = (struct tcphdr *)(((unsigned char *)VAR_9) +
     VAR_9->ihl*4);

   VAR_7 = VAR_4->no_of_vpath;
   VAR_8 = (FUNC_2(VAR_10->source) +
    FUNC_2(VAR_10->dest)) &
    VAR_4->vpath_selector[VAR_7 - 1];
   if (VAR_8 >= VAR_7)
    VAR_8 = VAR_7 - 1;

   if (VAR_9->protocol == VAR_1) {



   }
  }
 }
 return VAR_8;
}
