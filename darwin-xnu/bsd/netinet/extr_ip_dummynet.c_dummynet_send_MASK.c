
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int tmp_rt ;
struct route {int dummy; } ;
struct mbuf {struct mbuf* m_nextpkt; } ;
struct dn_pkt_tag {int dn_dir; int dn_flags; } ;






 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct route*) ;
 scalar_t__ FUNC_2 (struct mbuf*) ;
 int FUNC_3 (struct route*,int) ;
 struct dn_pkt_tag* FUNC_4 (struct mbuf*) ;
 int FUNC_5 (struct mbuf*,int *,int *,int ,int *,int *,int *) ;
 int FUNC_6 (struct mbuf*,int *,struct route*,int,int *,int *) ;
 int FUNC_7 (struct mbuf*) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (int ,struct mbuf*) ;

__attribute__((used)) static void
FUNC_10(struct mbuf *VAR_5)
{
 struct dn_pkt_tag *VAR_6;
 struct mbuf *VAR_7;

 for (; VAR_5 != ((void*)0); VAR_5 = VAR_7) {
  VAR_7 = VAR_5->m_nextpkt;
  VAR_5->m_nextpkt = ((void*)0);
  VAR_6 = FUNC_4(VAR_5);

  FUNC_0(("dummynet_send m: 0x%llx dn_dir: %d dn_flags: 0x%x\n",
      (uint64_t)FUNC_2(VAR_5), VAR_6->dn_dir,
      VAR_6->dn_flags));

 switch (VAR_6->dn_dir) {
  case 128: {
   struct route VAR_8;


   FUNC_3(&VAR_8, sizeof (VAR_8));


   VAR_6->dn_flags |= VAR_2 | VAR_1;
   (void)FUNC_6(VAR_5, ((void*)0), &VAR_8, VAR_6->dn_flags, ((void*)0), ((void*)0));
   FUNC_1(&VAR_8);
   break ;
  }
  case 129 :
   FUNC_9(VAR_3, VAR_5);
   break ;
  default:
   FUNC_8("dummynet: bad switch %d!\n", VAR_6->dn_dir);
   FUNC_7(VAR_5);
   break ;
 }
 }
}
