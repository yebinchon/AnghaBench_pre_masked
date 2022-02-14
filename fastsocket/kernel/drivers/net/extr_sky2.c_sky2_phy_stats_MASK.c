
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct sky2_port {unsigned int port; struct sky2_hw* hw; } ;
struct sky2_hw {int dummy; } ;
struct TYPE_2__ {int offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct sky2_hw*,unsigned int,int ) ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static void FUNC_1(struct sky2_port *VAR_5, u64 * VAR_6, unsigned VAR_7)
{
 struct sky2_hw *VAR_8 = VAR_5->hw;
 unsigned VAR_9 = VAR_5->port;
 int VAR_10;

 VAR_6[0] = (u64) FUNC_0(VAR_8, VAR_9, VAR_2) << 32
     | (u64) FUNC_0(VAR_8, VAR_9, VAR_3);
 VAR_6[1] = (u64) FUNC_0(VAR_8, VAR_9, VAR_0) << 32
     | (u64) FUNC_0(VAR_8, VAR_9, VAR_1);

 for (VAR_10 = 2; VAR_10 < VAR_7; VAR_10++)
  VAR_6[VAR_10] = (u64) FUNC_0(VAR_8, VAR_9, VAR_4[VAR_10].offset);
}
