
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jffs2_unknown_node {int nodetype; int hdr_crc; int totlen; int magic; } ;
struct jffs2_sb_info {int flags; } ;
struct jffs2_raw_node_ref {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (char*,int,...) ;




 int VAR_1 ;
 int FUNC_3 (char*,int,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct jffs2_sb_info*,struct jffs2_raw_node_ref*) ;
 scalar_t__ FUNC_8 (struct jffs2_raw_node_ref*) ;
 int FUNC_9 (struct jffs2_raw_node_ref*) ;

__attribute__((used)) static inline int FUNC_10(struct jffs2_sb_info *VAR_4, struct jffs2_raw_node_ref *VAR_5, struct jffs2_unknown_node *VAR_6)
{

 if (FUNC_8(VAR_5) == VAR_3) {
  FUNC_2("REF_UNCHECKED but unknown node at %#08x\n",
       FUNC_9(VAR_5));
  FUNC_2("Node is {%04x,%04x,%08x,%08x}. Please report this error.\n",
       FUNC_5(VAR_6->magic), FUNC_5(VAR_6->nodetype),
       FUNC_6(VAR_6->totlen), FUNC_6(VAR_6->hdr_crc));
  FUNC_7(VAR_4, VAR_5);
  return 0;
 }

 VAR_6->nodetype = FUNC_4(VAR_1 | FUNC_5(VAR_6->nodetype));

 switch(FUNC_5(VAR_6->nodetype) & VAR_0) {

 case 131:
  FUNC_2("unknown INCOMPAT nodetype %#04X at %#08x\n",
       FUNC_5(VAR_6->nodetype), FUNC_9(VAR_5));

  FUNC_0();
  break;

 case 130:
  FUNC_2("unknown ROCOMPAT nodetype %#04X at %#08x\n",
       FUNC_5(VAR_6->nodetype), FUNC_9(VAR_5));
  FUNC_1(!(VAR_4->flags & VAR_2));
  break;

 case 129:
  FUNC_3("unknown RWCOMPAT_COPY nodetype %#04X at %#08x\n",
        FUNC_5(VAR_6->nodetype), FUNC_9(VAR_5));
  break;

 case 128:
  FUNC_3("unknown RWCOMPAT_DELETE nodetype %#04X at %#08x\n",
        FUNC_5(VAR_6->nodetype), FUNC_9(VAR_5));
  FUNC_7(VAR_4, VAR_5);
  return 0;
 }

 return 0;
}
