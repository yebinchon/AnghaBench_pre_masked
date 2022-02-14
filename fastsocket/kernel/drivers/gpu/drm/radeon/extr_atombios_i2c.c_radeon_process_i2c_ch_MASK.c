
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u8 ;
typedef int u16 ;
struct TYPE_6__ {int i2c_id; } ;
struct radeon_i2c_chan {TYPE_1__ rec; struct drm_device* dev; } ;
struct TYPE_7__ {TYPE_5__* atom_context; } ;
struct radeon_device {TYPE_2__ mode_info; } ;
struct drm_device {struct radeon_device* dev_private; } ;
typedef int args ;
struct TYPE_9__ {scalar_t__ scratch; } ;
struct TYPE_8__ {int ucTransBytes; int ucSlaveAddr; scalar_t__ ucStatus; int ucLineNumber; scalar_t__ ucRegIndex; int ucI2CSpeed; int lpI2CDataOut; } ;
typedef TYPE_3__ PROCESS_I2C_CHANNEL_TRANSACTION_PS_ALLOCATION ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (TYPE_5__*,int,int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int*,...) ;
 int FUNC_6 (TYPE_3__*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct radeon_i2c_chan *VAR_9,
     u8 VAR_10, u8 VAR_11,
     u8 *VAR_12, u8 VAR_13)
{
 struct drm_device *VAR_14 = VAR_9->dev;
 struct radeon_device *VAR_15 = VAR_14->dev_private;
 PROCESS_I2C_CHANNEL_TRANSACTION_PS_ALLOCATION VAR_16;
 int VAR_17 = FUNC_2(VAR_2, VAR_7);
 unsigned char *VAR_18;
 u16 VAR_19;

 FUNC_6(&VAR_16, 0, sizeof(VAR_16));

 VAR_18 = (unsigned char *)VAR_15->mode_info.atom_context->scratch;

 if (VAR_11 & VAR_6) {
  if (VAR_13 > VAR_1) {
   FUNC_1("hw i2c: tried to write too many bytes (%d vs 2)\n", VAR_13);
   return -VAR_3;
  }
  FUNC_5(&VAR_19, VAR_12, VAR_13);
  VAR_16.lpI2CDataOut = FUNC_4(VAR_19);
 } else {
  if (VAR_13 > VAR_0) {
   FUNC_1("hw i2c: tried to read too many bytes (%d vs 255)\n", VAR_13);
   return -VAR_3;
  }
 }

 VAR_16.ucI2CSpeed = VAR_8;
 VAR_16.ucRegIndex = 0;
 VAR_16.ucTransBytes = VAR_13;
 VAR_16.ucSlaveAddr = VAR_10 << 1;
 VAR_16.ucLineNumber = VAR_9->rec.i2c_id;

 FUNC_3(VAR_15->mode_info.atom_context, VAR_17, (uint32_t *)&VAR_16);


 if (VAR_16.ucStatus != VAR_5) {
  FUNC_0("hw_i2c error\n");
  return -VAR_4;
 }

 if (!(VAR_11 & VAR_6))
  FUNC_5(VAR_12, VAR_18, VAR_13);

 return 0;
}
