
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct st_cmdstatus {int flags; int deferred; int fixed_format; int uremainder64; int remainder_valid; scalar_t__ have_sense; int sense_hdr; } ;
struct osst_request {int* sense; } ;


 int VAR_0 ;
 int FUNC_0 (int const*,int ,int *) ;
 scalar_t__ FUNC_1 (int*,int ,int *) ;
 int* FUNC_2 (int const*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct osst_request *VAR_1, struct st_cmdstatus *VAR_2)
{
 const u8 *VAR_3;
 const u8 *VAR_4 = VAR_1->sense;

 VAR_2->have_sense = FUNC_1(VAR_1->sense,
    VAR_0, &VAR_2->sense_hdr);
 VAR_2->flags = 0;

 if (VAR_2->have_sense) {
  VAR_2->deferred = 0;
  VAR_2->remainder_valid =
   FUNC_0(VAR_4, VAR_0, &VAR_2->uremainder64);
  switch (VAR_4[0] & 0x7f) {
  case 0x71:
   VAR_2->deferred = 1;
  case 0x70:
   VAR_2->fixed_format = 1;
   VAR_2->flags = VAR_4[2] & 0xe0;
   break;
  case 0x73:
   VAR_2->deferred = 1;
  case 0x72:
   VAR_2->fixed_format = 0;
   VAR_3 = FUNC_2(VAR_4, VAR_0, 4);
   VAR_2->flags = VAR_3 ? (VAR_3[3] & 0xe0) : 0;
   break;
  }
 }
}
