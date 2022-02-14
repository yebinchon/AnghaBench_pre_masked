
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_9__ {scalar_t__ enabled; } ;
struct airo_info {TYPE_2__ micstats; int flags; TYPE_1__* dev; } ;
typedef int payloadLen ;
typedef int pMic ;
typedef int etherHead ;
typedef int cmd ;
typedef int __le16 ;
typedef int __be16 ;
struct TYPE_11__ {int parm0; int cmd; } ;
struct TYPE_10__ {int status; } ;
struct TYPE_8__ {int name; } ;
typedef TYPE_3__ Resp ;
typedef int MICBuffer ;
typedef TYPE_4__ Cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,char*,int) ;
 scalar_t__ FUNC_1 (struct airo_info*,int,int,int ) ;
 int FUNC_2 (struct airo_info*,int *,int,int ) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct airo_info*,int *,int *,int) ;
 scalar_t__ FUNC_5 (struct airo_info*,TYPE_4__*,TYPE_3__*) ;
 int FUNC_6 (TYPE_4__*,int ,int) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,int *) ;

__attribute__((used)) static int FUNC_9(struct airo_info *VAR_6, int VAR_7, char *VAR_8)
{
 __le16 VAR_9;
 Cmd VAR_10;
 Resp VAR_11;
 int VAR_12 = 0;
 u16 VAR_13 = VAR_7;
 MICBuffer VAR_14;

 VAR_7 >>= 16;

 if (VAR_7 <= VAR_3 * 2) {
  FUNC_0(VAR_6->dev->name, "Short packet %d", VAR_7);
  return VAR_2;
 }
 VAR_7 -= VAR_3 * 2;

 if (FUNC_8(VAR_4, &VAR_6->flags) && VAR_6->micstats.enabled &&
     (FUNC_7(((__be16 *)VAR_8)[6]) != 0x888E)) {
  if (FUNC_4(VAR_6,(etherHead *)VAR_8,&VAR_14,VAR_7) != VAR_5)
   return VAR_2;
  VAR_12 = sizeof(VAR_14);
 }


 if (FUNC_1(VAR_6, VAR_13, 0x0036, VAR_0) != VAR_5) return VAR_2;


 VAR_9 = FUNC_3(VAR_7 + VAR_12);
 FUNC_2(VAR_6, &VAR_9, sizeof(VAR_9),VAR_0);
 FUNC_2(VAR_6, (__le16*)VAR_8, sizeof(etherHead), VAR_0);
 if (VAR_12)
  FUNC_2(VAR_6, (__le16*)&VAR_14, VAR_12, VAR_0);
 FUNC_2(VAR_6, (__le16*)(VAR_8 + sizeof(etherHead)), VAR_7, VAR_0);

 FUNC_6( &VAR_10, 0, sizeof( VAR_10 ) );
 VAR_10.cmd = VAR_1;
 VAR_10.parm0 = VAR_13;
 if (FUNC_5(VAR_6, &VAR_10, &VAR_11) != VAR_5) return VAR_2;
 if ( (VAR_11.status & 0xFF00) != 0) return VAR_2;
 return VAR_5;
}
