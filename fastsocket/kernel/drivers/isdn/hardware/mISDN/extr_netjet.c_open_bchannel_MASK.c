
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tiger_hw {TYPE_1__* bc; } ;
struct TYPE_6__ {int channel; } ;
struct channel_req {scalar_t__ protocol; TYPE_2__* ch; TYPE_3__ adr; } ;
struct TYPE_5__ {scalar_t__ protocol; } ;
struct bchannel {TYPE_2__ ch; int Flags; } ;
struct TYPE_4__ {struct bchannel bch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static int
FUNC_2(struct tiger_hw *VAR_5, struct channel_req *VAR_6)
{
 struct bchannel *VAR_7;

 if (VAR_6->adr.channel > 2)
  return -VAR_1;
 if (VAR_6->protocol == VAR_4)
  return -VAR_1;
 VAR_7 = &VAR_5->bc[VAR_6->adr.channel - 1].bch;
 if (FUNC_1(VAR_3, &VAR_7->Flags))
  return -VAR_0;
 FUNC_0(VAR_2, &VAR_7->Flags);
 VAR_7->ch.protocol = VAR_6->protocol;
 VAR_6->ch = &VAR_7->ch;
 return 0;
}
