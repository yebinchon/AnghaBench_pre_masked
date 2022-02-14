
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct bpf_packet {int dummy; } ;


 int FUNC_0 (struct bpf_packet*,int,int const,char*) ;
 int FUNC_1 (struct bpf_packet*,int,int const) ;
 int FUNC_2 (struct bpf_packet*,int,int const) ;

__attribute__((used)) static uint16_t
FUNC_3(struct bpf_packet *VAR_0, uint16_t VAR_1,
    const uint16_t VAR_2)
{
 int VAR_3 = 0;
 uint16_t VAR_4 = 0;
 char VAR_5[VAR_2];

 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_5);
 if (VAR_3 != 0)
  return (VAR_2);






 if (VAR_2 >= 4 &&
  VAR_5[0] == 0 && VAR_5[1] == 0 &&
  VAR_5[2] == 0 && VAR_5[3] == 0) {
  VAR_4 = 4 + FUNC_2(VAR_0, VAR_1 + 4, VAR_2 - 4);
 } else if (VAR_2 == 1) {
  VAR_4 = 1;
 } else {
  VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2);
 }

 if (VAR_4 > VAR_2)
  return (VAR_2);

 return (VAR_4);

}
