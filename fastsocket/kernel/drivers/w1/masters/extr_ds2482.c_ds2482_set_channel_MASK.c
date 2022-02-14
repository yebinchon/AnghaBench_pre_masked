
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct ds2482_data {int channel; int client; int read_prt; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__* VAR_2 ;
 int * VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct ds2482_data *VAR_4, u8 VAR_5)
{
 if (FUNC_1(VAR_4->client, VAR_0,
          VAR_3[VAR_5]) < 0)
  return -1;

 VAR_4->read_prt = VAR_1;
 VAR_4->channel = -1;
 if (FUNC_0(VAR_4->client) == VAR_2[VAR_5]) {
  VAR_4->channel = VAR_5;
  return 0;
 }
 return -1;
}
