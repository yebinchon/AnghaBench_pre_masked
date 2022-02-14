
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pf_vf_bulletin_content {scalar_t__ version; scalar_t__ crc; int valid_bitmap; int vlan; int * mac; } ;
struct bnx2x {struct pf_vf_bulletin_content old_bulletin; TYPE_2__* dev; TYPE_1__* pf2vf_bulletin; } ;
typedef enum sample_bulletin_result { ____Placeholder_sample_bulletin_result } sample_bulletin_result ;
struct TYPE_4__ {int * dev_addr; } ;
struct TYPE_3__ {struct pf_vf_bulletin_content content; } ;


 int FUNC_0 (char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (struct bnx2x*,struct pf_vf_bulletin_content*) ;
 scalar_t__ FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *,int *,int ) ;

enum sample_bulletin_result FUNC_4(struct bnx2x *VAR_8)
{
 struct pf_vf_bulletin_content VAR_9 = VAR_8->pf2vf_bulletin->content;
 int VAR_10;


 if (VAR_8->old_bulletin.version == VAR_9.version)
  return VAR_4;


 if (VAR_8->old_bulletin.version != VAR_8->pf2vf_bulletin->content.version) {



  for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
   VAR_9 = VAR_8->pf2vf_bulletin->content;
   if (VAR_9.crc == FUNC_1(VAR_8,
          &VAR_9))
    break;
   FUNC_0("bad crc on bulletin board. Contained %x computed %x\n",
      VAR_9.crc,
      FUNC_1(VAR_8, &VAR_9));
  }
  if (VAR_10 >= VAR_0) {
   FUNC_0("pf to vf bulletin board crc was wrong %d consecutive times. Aborting\n",
      VAR_10);
   return VAR_3;
  }
 }


 if (VAR_9.valid_bitmap & 1 << VAR_2 &&
     FUNC_2(VAR_9.mac, VAR_8->old_bulletin.mac, VAR_1)) {

  FUNC_3(VAR_8->dev->dev_addr, VAR_9.mac, VAR_1);
 }


 if (VAR_9.valid_bitmap & 1 << VAR_7)
  FUNC_3(&VAR_9.vlan, &VAR_8->old_bulletin.vlan, VAR_6);


 VAR_8->old_bulletin = VAR_9;

 return VAR_5;
}
