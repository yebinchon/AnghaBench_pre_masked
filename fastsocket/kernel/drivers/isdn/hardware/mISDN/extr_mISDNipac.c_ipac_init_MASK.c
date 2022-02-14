
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct ipac_hw {int type; int isac; int name; TYPE_2__* hscx; int conf; } ;
struct TYPE_3__ {int debug; } ;
struct TYPE_4__ {TYPE_1__ bch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ipac_hw*,int ) ;
 int FUNC_1 (struct ipac_hw*,int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int ,int ,int ) ;
 int FUNC_5 (char*,int ,int ) ;

__attribute__((used)) static int
FUNC_6(struct ipac_hw *VAR_7)
{
 u8 VAR_8;

 if (VAR_7->type & VAR_4) {
  FUNC_2(&VAR_7->hscx[0]);
  FUNC_2(&VAR_7->hscx[1]);
  VAR_8 = FUNC_0(VAR_7, VAR_2);
 } else if (VAR_7->type & VAR_5) {
  FUNC_2(&VAR_7->hscx[0]);
  FUNC_2(&VAR_7->hscx[1]);
  FUNC_1(VAR_7, VAR_3, VAR_6);
  VAR_8 = FUNC_0(VAR_7, VAR_1);

  FUNC_4("%s: IPAC CONF %02x/%02x\n", VAR_7->name,
   VAR_8, VAR_7->conf);
  FUNC_1(VAR_7, VAR_1, VAR_7->conf);
  VAR_8 = FUNC_0(VAR_7, VAR_2);
  if (VAR_7->hscx[0].bch.debug & VAR_0)
   FUNC_5("%s: IPAC Design ID %02x\n", VAR_7->name, VAR_8);
 }

 return FUNC_3(&VAR_7->isac);
}
