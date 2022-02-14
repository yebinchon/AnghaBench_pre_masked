
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pktap_v2_hdr {int pth_flags; } ;
struct TYPE_4__ {int tv_usec; int tv_sec; } ;
struct pktap_header {int pth_flags; TYPE_2__ pth_tstamp; } ;
struct TYPE_3__ {int tv_usec; int tv_sec; } ;
struct bpf_hdr {TYPE_1__ bh_tstamp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pktap_header*) ;
 int FUNC_1 (struct pktap_v2_hdr*) ;

__attribute__((used)) static void
FUNC_2(struct bpf_hdr *VAR_3, struct pktap_header *VAR_4)
{
 if (VAR_4->pth_flags & VAR_2) {
  struct pktap_v2_hdr *VAR_5;

  VAR_5 = (struct pktap_v2_hdr *)VAR_4;

  if (VAR_5->pth_flags & VAR_0)
   FUNC_1(VAR_5);
 } else {
  if (VAR_4->pth_flags & VAR_0)
   FUNC_0(VAR_4);

  if (VAR_4->pth_flags & VAR_1) {
   VAR_3->bh_tstamp.tv_sec = VAR_4->pth_tstamp.tv_sec;
   VAR_3->bh_tstamp.tv_usec = VAR_4->pth_tstamp.tv_usec;
  }
 }
}
