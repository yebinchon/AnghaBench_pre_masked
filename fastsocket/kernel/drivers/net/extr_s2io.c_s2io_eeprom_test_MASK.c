
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u8 ;
typedef int u64 ;
struct s2io_nic {scalar_t__ device_type; struct net_device* dev; } ;
struct net_device {int name; } ;


 int FUNC_0 (int ,char*,int ,unsigned long long,unsigned long long) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (struct s2io_nic*,int,int*) ;
 int FUNC_2 (struct s2io_nic*,int,int,int) ;

__attribute__((used)) static int FUNC_3(struct s2io_nic *VAR_2, uint64_t *VAR_3)
{
 int VAR_4 = 0;
 u64 VAR_5, VAR_6, VAR_7;
 u8 VAR_8 = 0, VAR_9 = 0;
 struct net_device *VAR_10 = VAR_2->dev;





 if (VAR_2->device_type == VAR_1)
  if (!FUNC_2(VAR_2, 0, 0, 3))
   VAR_4 = 1;


 if (!FUNC_1(VAR_2, 0x4F0, &VAR_6))
  VAR_8 = 1;
 if (!FUNC_1(VAR_2, 0x7F0, &VAR_7))
  VAR_9 = 1;


 if (FUNC_2(VAR_2, 0x4F0, 0x012345, 3))
  VAR_4 = 1;
 if (FUNC_1(VAR_2, 0x4F0, &VAR_5))
  VAR_4 = 1;

 if (VAR_5 != 0x012345) {
  FUNC_0(VAR_0, "%s: eeprom test error at offset 0x4F0. "
     "Data written %llx Data read %llx\n",
     VAR_10->name, (unsigned long long)0x12345,
     (unsigned long long)VAR_5);
  VAR_4 = 1;
 }


 FUNC_2(VAR_2, 0x4F0, 0xFFFFFF, 3);


 if (VAR_2->device_type == VAR_1)
  if (!FUNC_2(VAR_2, 0x07C, 0, 3))
   VAR_4 = 1;


 if (FUNC_2(VAR_2, 0x7F0, 0x012345, 3))
  VAR_4 = 1;
 if (FUNC_1(VAR_2, 0x7F0, &VAR_5))
  VAR_4 = 1;

 if (VAR_5 != 0x012345) {
  FUNC_0(VAR_0, "%s: eeprom test error at offset 0x7F0. "
     "Data written %llx Data read %llx\n",
     VAR_10->name, (unsigned long long)0x12345,
     (unsigned long long)VAR_5);
  VAR_4 = 1;
 }


 FUNC_2(VAR_2, 0x7F0, 0xFFFFFF, 3);

 if (VAR_2->device_type == VAR_1) {

  if (!FUNC_2(VAR_2, 0x080, 0, 3))
   VAR_4 = 1;


  if (!FUNC_2(VAR_2, 0x0FC, 0, 3))
   VAR_4 = 1;


  if (!FUNC_2(VAR_2, 0x100, 0, 3))
   VAR_4 = 1;


  if (!FUNC_2(VAR_2, 0x4EC, 0, 3))
   VAR_4 = 1;
 }


 if (VAR_8)
  FUNC_2(VAR_2, 0x4F0, VAR_6, 3);
 if (VAR_9)
  FUNC_2(VAR_2, 0x7F0, VAR_7, 3);

 *VAR_3 = VAR_4;
 return VAR_4;
}
