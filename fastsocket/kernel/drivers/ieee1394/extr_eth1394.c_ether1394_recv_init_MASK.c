
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct eth1394_priv {int bc_state; int * iso; int broadcast_channel; TYPE_2__* host; } ;
struct TYPE_3__ {int max_rec; } ;
struct TYPE_4__ {TYPE_1__ csr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int * FUNC_1 (TYPE_2__*,unsigned int,unsigned int,int ,int ,int,int ) ;
 scalar_t__ FUNC_2 (int *,int,int,int) ;
 unsigned int FUNC_3 (unsigned int,int) ;

__attribute__((used)) static int FUNC_4(struct eth1394_priv *VAR_9)
{
 unsigned int VAR_10;


 VAR_10 = FUNC_3((unsigned int)VAR_7,
      2 * (1U << (VAR_9->host->csr.max_rec + 1)));

 VAR_9->iso = FUNC_1(VAR_9->host,
           VAR_4 * VAR_10,
           VAR_4,
           VAR_9->broadcast_channel,
           VAR_5,
           1, VAR_8);
 if (VAR_9->iso == ((void*)0)) {
  FUNC_0(VAR_6, "Failed to allocate IR context\n");
  VAR_9->bc_state = VAR_1;
  return -VAR_0;
 }

 if (FUNC_2(VAR_9->iso, -1, (1 << 3), -1) < 0)
  VAR_9->bc_state = VAR_3;
 else
  VAR_9->bc_state = VAR_2;
 return 0;
}
