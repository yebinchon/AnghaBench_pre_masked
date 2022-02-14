
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct il_priv {int dummy; } ;
struct il_host_cmd {void const* data; void (* callback ) (struct il_priv*,struct il_device_cmd*,struct il_rx_pkt*) ;int flags; int len; int id; } ;


 int VAR_0 ;
 int FUNC_0 (struct il_priv*,struct il_host_cmd*) ;

int
FUNC_1(struct il_priv *VAR_1, u8 VAR_2, u16 VAR_3, const void *VAR_4,
        void (*VAR_5) (struct il_priv *VAR_6,
     struct il_device_cmd *VAR_7,
     struct il_rx_pkt *VAR_8))
{
 struct il_host_cmd VAR_9 = {
  .id = VAR_2,
  .len = VAR_3,
  .data = VAR_4,
 };

 VAR_9.flags |= VAR_0;
 VAR_9.callback = VAR_5;

 return FUNC_0(VAR_1, &VAR_9);
}
