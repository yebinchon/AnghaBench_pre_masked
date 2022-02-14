
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isdn_ppp_comp_data {int optlen; scalar_t__ num; int flags; int * options; } ;
struct bsd_dict {int dummy; } ;
struct bsd_db {int xmit; int totlen; unsigned int hsize; unsigned int hshift; unsigned int maxmaxcode; int maxbits; int * lens; void* dict; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_2 (int) ;
 int FUNC_3 (struct bsd_db*) ;
 struct bsd_db* FUNC_4 (int,int ) ;
 void* FUNC_5 (unsigned int) ;

__attribute__((used)) static void *FUNC_6 (struct isdn_ppp_comp_data *VAR_4)
{
 int VAR_5;
 unsigned int VAR_6, VAR_7, VAR_8;
 struct bsd_db *VAR_9;
 int VAR_10;

 static unsigned int VAR_11[][2] = {
  { 5003 , 4 } , { 5003 , 4 } , { 5003 , 4 } , { 5003 , 4 } ,
  { 9001 , 5 } , { 18013 , 6 } , { 35023 , 7 } , { 69001 , 8 }
 };

 if (VAR_4->optlen != 1 || VAR_4->num != VAR_1
  || FUNC_1(VAR_4->options[0]) != VAR_0)
  return ((void*)0);

 VAR_5 = FUNC_0(VAR_4->options[0]);

 if(VAR_5 < 9 || VAR_5 > 15)
  return ((void*)0);

 VAR_6 = VAR_11[VAR_5-9][0];
 VAR_7 = VAR_11[VAR_5-9][1];




 VAR_8 = FUNC_2(VAR_5);
 VAR_9 = FUNC_4 (sizeof (struct bsd_db),VAR_2);
 if (!VAR_9)
  return ((void*)0);

 VAR_9->xmit = VAR_4->flags & VAR_3;
 VAR_10 = VAR_9->xmit ? 0 : 1;





 VAR_9->dict = FUNC_5(VAR_6 * sizeof(struct bsd_dict));
 if (!VAR_9->dict) {
  FUNC_3 (VAR_9);
  return ((void*)0);
 }





 if (!VAR_10)
  VAR_9->lens = ((void*)0);
 else {
  VAR_9->lens = FUNC_5((VAR_8 + 1) * sizeof(VAR_9->lens[0]));
  if (!VAR_9->lens) {
   FUNC_3 (VAR_9);
   return (((void*)0));
  }
 }




 VAR_9->totlen = sizeof (struct bsd_db) + (sizeof (struct bsd_dict) * VAR_6);
 VAR_9->hsize = VAR_6;
 VAR_9->hshift = VAR_7;
 VAR_9->maxmaxcode = VAR_8;
 VAR_9->maxbits = VAR_5;

 return (void *) VAR_9;
}
