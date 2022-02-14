
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct airo_info {TYPE_1__* dev; } ;
typedef int payloadLen ;
typedef int cmd ;
typedef int __le16 ;
struct TYPE_9__ {int parm0; int cmd; } ;
struct TYPE_8__ {int status; } ;
struct TYPE_7__ {int name; } ;
typedef TYPE_2__ Resp ;
typedef TYPE_3__ Cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 scalar_t__ FUNC_1 (struct airo_info*,int,int,int ) ;
 int FUNC_2 (struct airo_info*,int *,int,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct airo_info*,TYPE_3__*,TYPE_2__*) ;
 int FUNC_6 (TYPE_3__*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct airo_info *VAR_4, int VAR_5, char *VAR_6)
{
 __le16 VAR_7, VAR_8;
 Cmd VAR_9;
 Resp VAR_10;
 int VAR_11;
 static u8 VAR_12[(30-10) + 2 + 6] = {[30-10] = 6};

 u16 VAR_13 = VAR_5;
 VAR_5 >>= 16;

 VAR_7 = *(__le16*)VAR_6;
 VAR_11 = FUNC_4(VAR_7);

 if (VAR_5 < VAR_11) {
  FUNC_0(VAR_4->dev->name, "Short packet %d", VAR_5);
  return VAR_2;
 }



 if (FUNC_1(VAR_4, VAR_13, 6, VAR_0) != VAR_3) return VAR_2;


 VAR_8 = FUNC_3(VAR_5-VAR_11);
 FUNC_2(VAR_4, &VAR_8, sizeof(VAR_8),VAR_0);
 if (FUNC_1(VAR_4, VAR_13, 0x0014, VAR_0) != VAR_3) return VAR_2;
 FUNC_2(VAR_4, (__le16 *)VAR_6, VAR_11, VAR_0);
 FUNC_2(VAR_4, (__le16 *)(VAR_12 + (VAR_11 - 10)), 38 - VAR_11, VAR_0);

 FUNC_2(VAR_4, (__le16 *)(VAR_6 + VAR_11), VAR_5 - VAR_11, VAR_0);

 FUNC_6( &VAR_9, 0, sizeof( VAR_9 ) );
 VAR_9.cmd = VAR_1;
 VAR_9.parm0 = VAR_13;
 if (FUNC_5(VAR_4, &VAR_9, &VAR_10) != VAR_3) return VAR_2;
 if ( (VAR_10.status & 0xFF00) != 0) return VAR_2;
 return VAR_3;
}
