
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct ds2482_data {int read_prt; int client; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static inline int FUNC_1(struct ds2482_data *VAR_3,
           u8 VAR_4, u8 VAR_5)
{
 if (FUNC_0(VAR_3->client, VAR_4, VAR_5) < 0)
  return -1;


 VAR_3->read_prt = (VAR_4 != VAR_0) ?
    VAR_2 : VAR_1;
 return 0;
}
