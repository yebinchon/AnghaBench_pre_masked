
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct sfbbinstats {int bytes; int pkts; } ;
struct sfb {int sfb_current; } ;


 int FUNC_0 (int ) ;
 struct sfbbinstats* FUNC_1 (struct sfb*,int,int,int) ;
 int VAR_0 ;
 int FUNC_2 (int) ;

__attribute__((used)) static inline void
FUNC_3(struct sfb *VAR_1, uint32_t VAR_2, uint32_t VAR_3)
{

 int VAR_4, VAR_5;

 int VAR_6;
 struct sfbbinstats *VAR_7;
 uint8_t *VAR_8 = (uint8_t *)&VAR_2;
 VAR_6 = VAR_1->sfb_current;
 FUNC_2((VAR_6 + (VAR_6 ^ 1)) == 1);
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (VAR_6 == 0)
   VAR_5 = FUNC_0(VAR_8[VAR_4]);
  else
   VAR_5 = FUNC_0(VAR_8[VAR_4 + 2]);

  VAR_7 = FUNC_1(VAR_1, VAR_4, VAR_5, VAR_6);
  VAR_7->pkts++;
  VAR_7->bytes += VAR_3;
 }

}
