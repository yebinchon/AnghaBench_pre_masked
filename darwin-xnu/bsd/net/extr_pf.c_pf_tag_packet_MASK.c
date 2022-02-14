
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct pf_pdesc {int pktflags; int proto; int flowhash; int flowsrc; } ;
struct pf_mtag {int pftag_tag; unsigned int pftag_rtableid; } ;
struct TYPE_4__ {int* pb_flags; int * pb_proto; int * pb_flowid; int * pb_flowsrc; } ;
typedef TYPE_1__ pbuf_t ;


 scalar_t__ FUNC_0 (unsigned int) ;
 int VAR_0 ;
 struct pf_mtag* FUNC_1 (TYPE_1__*) ;

int
FUNC_2(pbuf_t *VAR_1, struct pf_mtag *VAR_2, int VAR_3,
    unsigned int VAR_4, struct pf_pdesc *VAR_5)
{
 if (VAR_3 <= 0 && !FUNC_0(VAR_4) &&
     (VAR_5 == ((void*)0) || !(VAR_5->pktflags & VAR_0)))
  return (0);

 if (VAR_2 == ((void*)0) && (VAR_2 = FUNC_1(VAR_1)) == ((void*)0))
  return (1);

 if (VAR_3 > 0)
  VAR_2->pftag_tag = VAR_3;
 if (FUNC_0(VAR_4))
  VAR_2->pftag_rtableid = VAR_4;
 if (VAR_5 != ((void*)0) && (VAR_5->pktflags & VAR_0)) {
  *VAR_1->pb_flowsrc = VAR_5->flowsrc;
  *VAR_1->pb_flowid = VAR_5->flowhash;
  *VAR_1->pb_flags |= VAR_5->pktflags;
  *VAR_1->pb_proto = VAR_5->proto;
 }

 return (0);
}
