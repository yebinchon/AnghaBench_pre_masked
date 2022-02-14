
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int mapsz; struct ipath_mr** map; int lkey; } ;
struct TYPE_3__ {int lkey; int rkey; } ;
struct ipath_mr {TYPE_2__ mr; TYPE_1__ ibmr; } ;
struct ipath_lkey_table {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ipath_lkey_table*,TYPE_2__*) ;
 int FUNC_1 (struct ipath_mr*) ;
 void* FUNC_2 (int,int ) ;

__attribute__((used)) static struct ipath_mr *FUNC_3(int VAR_2,
     struct ipath_lkey_table *VAR_3)
{
 struct ipath_mr *VAR_4;
 int VAR_5, VAR_6 = 0;


 VAR_5 = (VAR_2 + VAR_1 - 1) / VAR_1;
 VAR_4 = FUNC_2(sizeof *VAR_4 + VAR_5 * sizeof VAR_4->mr.map[0], VAR_0);
 if (!VAR_4)
  goto done;


 for (; VAR_6 < VAR_5; VAR_6++) {
  VAR_4->mr.map[VAR_6] = FUNC_2(sizeof *VAR_4->mr.map[0], VAR_0);
  if (!VAR_4->mr.map[VAR_6])
   goto bail;
 }
 VAR_4->mr.mapsz = VAR_5;





 if (!FUNC_0(VAR_3, &VAR_4->mr))
  goto bail;
 VAR_4->ibmr.rkey = VAR_4->ibmr.lkey = VAR_4->mr.lkey;

 goto done;

bail:
 while (VAR_6) {
  VAR_6--;
  FUNC_1(VAR_4->mr.map[VAR_6]);
 }
 FUNC_1(VAR_4);
 VAR_4 = ((void*)0);

done:
 return VAR_4;
}
