
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int word4; void* word3; void* word2; void* word1; } ;
struct TYPE_5__ {int lf; } ;
struct TYPE_4__ {unsigned int fg_off; } ;
union eth1394_hdr {TYPE_3__ words; TYPE_2__ common; TYPE_1__ sf; } ;
struct sk_buff {unsigned int len; } ;



 int VAR_0 ;
 int VAR_1 ;

 int* VAR_2 ;
 void* FUNC_0 (void*) ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;
 scalar_t__ FUNC_2 (struct sk_buff*,unsigned int) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int) ;

__attribute__((used)) static unsigned int FUNC_4(struct sk_buff *VAR_3,
       unsigned int VAR_4,
       union eth1394_hdr *VAR_5)
{
 union eth1394_hdr *VAR_6;
 int VAR_7 = VAR_5->common.lf;
 int VAR_8 = VAR_2[VAR_7];
 unsigned int VAR_9 = VAR_4 - VAR_8;

 switch (VAR_7) {
 case 128:
  VAR_6 = (union eth1394_hdr *)FUNC_3(VAR_3, VAR_8);
  VAR_6->words.word1 = FUNC_0(VAR_5->words.word1);
  VAR_6->words.word2 = VAR_5->words.word2;
  break;

 case 129:
  VAR_6 = (union eth1394_hdr *)FUNC_3(VAR_3, VAR_8);
  VAR_6->words.word1 = FUNC_0(VAR_5->words.word1);
  VAR_6->words.word2 = VAR_5->words.word2;
  VAR_6->words.word3 = FUNC_0(VAR_5->words.word3);
  VAR_6->words.word4 = 0;


  VAR_5->common.lf = VAR_0;
  VAR_5->sf.fg_off = 0;
  break;

 default:
  VAR_5->sf.fg_off += VAR_9;
  VAR_6 = (union eth1394_hdr *)FUNC_2(VAR_3, VAR_9);
  if (VAR_4 >= VAR_3->len)
   VAR_5->common.lf = VAR_1;
  VAR_6->words.word1 = FUNC_0(VAR_5->words.word1);
  VAR_6->words.word2 = FUNC_0(VAR_5->words.word2);
  VAR_6->words.word3 = FUNC_0(VAR_5->words.word3);
  VAR_6->words.word4 = 0;
 }
 return FUNC_1(VAR_4, VAR_3->len);
}
