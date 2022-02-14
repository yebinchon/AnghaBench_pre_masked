
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int* __u6_addr32; } ;
struct TYPE_8__ {TYPE_2__ __u6_addr; } ;
struct ip_flow_id {int dst_port; int src_port; int proto; scalar_t__ flags; int flow_id6; int dst_ip; int src_ip; TYPE_3__ src_ip6; TYPE_3__ dst_ip6; } ;
struct TYPE_6__ {int dst_port; int src_port; int proto; int flow_id6; int dst_ip; int src_ip; int src_ip6; int dst_ip6; } ;
struct dn_flow_set {int flags_fs; int rq_size; struct dn_flow_queue** rq; int rq_elements; TYPE_1__ flow_mask; } ;
struct dn_flow_queue {scalar_t__ S; scalar_t__ F; struct ip_flow_id id; struct dn_flow_queue* next; int * head; } ;


 int FUNC_0 (TYPE_3__*,int *) ;
 int VAR_0 ;
 int FUNC_1 (struct dn_flow_queue*,int ) ;
 scalar_t__ FUNC_2 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_3 (struct ip_flow_id*) ;
 int VAR_1 ;
 struct dn_flow_queue* FUNC_4 (struct dn_flow_set*,int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static struct dn_flow_queue *
FUNC_5(struct dn_flow_set *VAR_5, struct ip_flow_id *VAR_6)
{
    int VAR_7 = 0 ;
    struct dn_flow_queue *VAR_8, *VAR_9;
    int VAR_10 = FUNC_3(VAR_6);

    if ( !(VAR_5->flags_fs & VAR_0) )
 VAR_8 = VAR_5->rq[0] ;
    else {

 VAR_6->dst_port &= VAR_5->flow_mask.dst_port ;
 VAR_6->src_port &= VAR_5->flow_mask.src_port ;
 VAR_6->proto &= VAR_5->flow_mask.proto ;
 VAR_6->flags = 0 ;
        if (VAR_10) {
            FUNC_0(&VAR_6->dst_ip6, &VAR_5->flow_mask.dst_ip6);
            FUNC_0(&VAR_6->src_ip6, &VAR_5->flow_mask.src_ip6);
            VAR_6->flow_id6 &= VAR_5->flow_mask.flow_id6;

            VAR_7 = ((VAR_6->dst_ip6.__u6_addr.__u6_addr32[0]) & 0xffff)^
                ((VAR_6->dst_ip6.__u6_addr.__u6_addr32[1]) & 0xffff)^
                ((VAR_6->dst_ip6.__u6_addr.__u6_addr32[2]) & 0xffff)^
                ((VAR_6->dst_ip6.__u6_addr.__u6_addr32[3]) & 0xffff)^

                ((VAR_6->dst_ip6.__u6_addr.__u6_addr32[0] >> 15) & 0xffff)^
                ((VAR_6->dst_ip6.__u6_addr.__u6_addr32[1] >> 15) & 0xffff)^
                ((VAR_6->dst_ip6.__u6_addr.__u6_addr32[2] >> 15) & 0xffff)^
                ((VAR_6->dst_ip6.__u6_addr.__u6_addr32[3] >> 15) & 0xffff)^

                ((VAR_6->src_ip6.__u6_addr.__u6_addr32[0] << 1) & 0xfffff)^
                ((VAR_6->src_ip6.__u6_addr.__u6_addr32[1] << 1) & 0xfffff)^
                ((VAR_6->src_ip6.__u6_addr.__u6_addr32[2] << 1) & 0xfffff)^
                ((VAR_6->src_ip6.__u6_addr.__u6_addr32[3] << 1) & 0xfffff)^

                ((VAR_6->src_ip6.__u6_addr.__u6_addr32[0] >> 16) & 0xffff)^
                ((VAR_6->src_ip6.__u6_addr.__u6_addr32[1] >> 16) & 0xffff)^
                ((VAR_6->src_ip6.__u6_addr.__u6_addr32[2] >> 16) & 0xffff)^
                ((VAR_6->src_ip6.__u6_addr.__u6_addr32[3] >> 16) & 0xffff)^

                (VAR_6->dst_port << 1) ^ (VAR_6->src_port) ^
                (VAR_6->proto ) ^
                (VAR_6->flow_id6);
        } else {
            VAR_6->dst_ip &= VAR_5->flow_mask.dst_ip ;
            VAR_6->src_ip &= VAR_5->flow_mask.src_ip ;

            VAR_7 = ( (VAR_6->dst_ip) & 0xffff ) ^
                ( (VAR_6->dst_ip >> 15) & 0xffff ) ^
                ( (VAR_6->src_ip << 1) & 0xffff ) ^
                ( (VAR_6->src_ip >> 16 ) & 0xffff ) ^
                (VAR_6->dst_port << 1) ^ (VAR_6->src_port) ^
                (VAR_6->proto );
        }
 VAR_7 = VAR_7 % VAR_5->rq_size ;

 VAR_4++ ;
 for (VAR_9=((void*)0), VAR_8 = VAR_5->rq[VAR_7] ; VAR_8 ; ) {
     VAR_3++;
            if (VAR_10 &&
                    FUNC_2(&VAR_6->dst_ip6,&VAR_8->id.dst_ip6) &&
                    FUNC_2(&VAR_6->src_ip6,&VAR_8->id.src_ip6) &&
                    VAR_6->dst_port == VAR_8->id.dst_port &&
                    VAR_6->src_port == VAR_8->id.src_port &&
                    VAR_6->proto == VAR_8->id.proto &&
                    VAR_6->flags == VAR_8->id.flags &&
                    VAR_6->flow_id6 == VAR_8->id.flow_id6)
                break ;

            if (!VAR_10 && VAR_6->dst_ip == VAR_8->id.dst_ip &&
                    VAR_6->src_ip == VAR_8->id.src_ip &&
                    VAR_6->dst_port == VAR_8->id.dst_port &&
                    VAR_6->src_port == VAR_8->id.src_port &&
                    VAR_6->proto == VAR_8->id.proto &&
                    VAR_6->flags == VAR_8->id.flags)
                break ;


     if (VAR_2 && VAR_8->head == ((void*)0) && VAR_8->S == VAR_8->F+1 ) {

  struct dn_flow_queue *VAR_11 = VAR_8 ;

  if (VAR_9 != ((void*)0))
      VAR_9->next = VAR_8 = VAR_8->next ;
  else
      VAR_5->rq[VAR_7] = VAR_8 = VAR_8->next ;
  VAR_5->rq_elements-- ;
  FUNC_1(VAR_11, VAR_1);
  continue ;
     }
     VAR_9 = VAR_8 ;
     VAR_8 = VAR_8->next ;
 }
 if (VAR_8 && VAR_9 != ((void*)0)) {
     VAR_9->next = VAR_8->next ;
     VAR_8->next = VAR_5->rq[VAR_7] ;
     VAR_5->rq[VAR_7] = VAR_8 ;
 }
    }
    if (VAR_8 == ((void*)0)) {
 VAR_8 = FUNC_4(VAR_5, VAR_7);
 if (VAR_8 != ((void*)0))
 VAR_8->id = *VAR_6 ;
    }
    return VAR_8 ;
}
