
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packet_data {int state; scalar_t__ sector; int id; } ;
typedef enum packet_data_state { ____Placeholder_packet_data_state } packet_data_state ;


 int FUNC_0 (char*,int ,unsigned long long,char const*,char const*) ;

__attribute__((used)) static inline void FUNC_1(struct packet_data *VAR_0, enum packet_data_state VAR_1)
{
 VAR_0->state = VAR_1;
}
