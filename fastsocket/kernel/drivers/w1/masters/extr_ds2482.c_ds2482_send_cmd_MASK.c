
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ds2482_data {int read_prt; int client; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static inline int FUNC_1(struct ds2482_data *VAR_1, u8 VAR_2)
{
 if (FUNC_0(VAR_1->client, VAR_2) < 0)
  return -1;

 VAR_1->read_prt = VAR_0;
 return 0;
}
