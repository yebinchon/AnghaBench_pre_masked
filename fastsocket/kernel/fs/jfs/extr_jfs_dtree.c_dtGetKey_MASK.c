
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int wchar_t ;
struct ldtentry {int next; int namlen; int * name; } ;
struct idtentry {int next; int namlen; int * name; } ;
struct dtslot {int next; int * name; } ;
struct component_name {int namlen; int * name; } ;
typedef int s8 ;
struct TYPE_5__ {int flag; } ;
struct TYPE_6__ {struct dtslot* slot; TYPE_1__ header; } ;
typedef TYPE_2__ dtpage_t ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int* FUNC_0 (TYPE_2__*) ;
 int VAR_5 ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static void FUNC_3(dtpage_t * VAR_6, int VAR_7,
       struct component_name * VAR_8, int VAR_9)
{
 int VAR_10;
 s8 *VAR_11;
 struct ldtentry *VAR_12;
 struct idtentry *VAR_13;
 struct dtslot *VAR_14;
 int VAR_15, VAR_16;
 wchar_t *VAR_17;
 __le16 *VAR_18;


 VAR_11 = FUNC_0(VAR_6);
 VAR_10 = VAR_11[VAR_7];
 if (VAR_6->header.flag & VAR_0) {
  VAR_12 = (struct ldtentry *) & VAR_6->slot[VAR_10];
  VAR_10 = VAR_12->next;
  VAR_15 = VAR_12->namlen;
  VAR_18 = VAR_12->name;
  if (VAR_9 & VAR_5)
   VAR_16 = FUNC_2(VAR_15, VAR_2);
  else
   VAR_16 = FUNC_2(VAR_15, VAR_3);
 } else {
  VAR_13 = (struct idtentry *) & VAR_6->slot[VAR_10];
  VAR_10 = VAR_13->next;
  VAR_15 = VAR_13->namlen;
  VAR_18 = VAR_13->name;
  VAR_16 = FUNC_2(VAR_15, VAR_1);
 }

 VAR_8->namlen = VAR_15;
 VAR_17 = VAR_8->name;




 FUNC_1(VAR_17, VAR_18, VAR_16);




 while (VAR_10 >= 0) {

  VAR_14 = &VAR_6->slot[VAR_10];
  VAR_17 += VAR_16;
  VAR_15 -= VAR_16;
  VAR_16 = FUNC_2(VAR_15, VAR_4);
  FUNC_1(VAR_17, VAR_14->name, VAR_16);

  VAR_10 = VAR_14->next;
 }
}
