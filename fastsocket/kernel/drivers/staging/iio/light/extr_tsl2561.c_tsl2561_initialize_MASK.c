
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tsl2561_state {int command_buf_lock; TYPE_1__* command_buf; int client; } ;
struct TYPE_2__ {int address; scalar_t__ block; scalar_t__ word; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct tsl2561_state *VAR_4)
{
 int VAR_5;

 FUNC_1(&VAR_4->command_buf_lock);
 VAR_4->command_buf->word = 0;
 VAR_4->command_buf->block = 0;
 VAR_4->command_buf->address = VAR_0;
 VAR_5 = FUNC_0(VAR_4->client, *(char *)(VAR_4->command_buf),
     VAR_1);
 if (VAR_5)
  goto error_ret;

 VAR_4->command_buf->address = VAR_2;
 VAR_5 = FUNC_0(VAR_4->client, *(char *)(VAR_4->command_buf),
     VAR_3);

error_ret:
 FUNC_2(&VAR_4->command_buf_lock);

 return VAR_5;
}
