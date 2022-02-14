
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct entropy_store {int entropy_count; int lock; scalar_t__ limit; int name; TYPE_1__* poolinfo; } ;
struct TYPE_2__ {int POOLBITS; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,size_t,int ,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static size_t FUNC_6(struct entropy_store *VAR_5, size_t VAR_6, int VAR_7,
        int VAR_8)
{
 unsigned long VAR_9;


 FUNC_3(&VAR_5->lock, VAR_9);

 FUNC_0(VAR_5->entropy_count > VAR_5->poolinfo->POOLBITS);
 FUNC_1("trying to extract %d bits from %s\n",
    VAR_6 * 8, VAR_5->name);


 if (VAR_5->entropy_count / 8 < VAR_7 + VAR_8) {
  VAR_6 = 0;
 } else {

  if (VAR_5->limit && VAR_6 + VAR_8 >= VAR_5->entropy_count / 8)
   VAR_6 = VAR_5->entropy_count/8 - VAR_8;

  if (VAR_5->entropy_count / 8 >= VAR_6 + VAR_8)
   VAR_5->entropy_count -= VAR_6*8;
  else
   VAR_5->entropy_count = VAR_8;

  if (VAR_5->entropy_count < VAR_4) {
   FUNC_5(&VAR_3);
   FUNC_2(&VAR_2, VAR_1, VAR_0);
  }
 }

 FUNC_1("debiting %d entropy credits from %s%s\n",
    VAR_6 * 8, VAR_5->name, VAR_5->limit ? "" : " (unlimited)");

 FUNC_4(&VAR_5->lock, VAR_9);

 return VAR_6;
}
