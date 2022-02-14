
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 scalar_t__ FUNC_0 (struct page*) ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int *,int,int ,int ,int ,int ,struct page**) ;
 int FUNC_3 (struct page**,int,int ) ;
 int FUNC_4 (unsigned long,unsigned long) ;
 unsigned long FUNC_5 (struct page*) ;
 scalar_t__ FUNC_6 (unsigned long,unsigned long,unsigned long,int *) ;

__attribute__((used)) static int FUNC_7(struct page **VAR_7, int VAR_8,
  unsigned long VAR_9)
{
 unsigned long VAR_10;
 unsigned long VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;

 for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12++) {
  if (FUNC_0(VAR_7[VAR_12]))
   continue;
  VAR_10 = FUNC_5(VAR_7[VAR_12]) << VAR_2;
  VAR_11 = VAR_10 + VAR_3;
  if (FUNC_6(VAR_10, VAR_11, VAR_9, ((void*)0)))
   goto err_out;
 }

 VAR_14 = FUNC_3(VAR_7, VAR_8,
   FUNC_1(VAR_5));
 if (!VAR_14 && VAR_9 == VAR_6)
  VAR_14 = FUNC_2(((void*)0), VAR_8,
            FUNC_1(VAR_6),
            FUNC_1(VAR_4),
            0, VAR_0, VAR_7);
 if (VAR_14)
  goto err_out;
 return 0;
err_out:
 VAR_13 = VAR_12;
 for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++) {
  if (FUNC_0(VAR_7[VAR_12]))
   continue;
  VAR_10 = FUNC_5(VAR_7[VAR_12]) << VAR_2;
  VAR_11 = VAR_10 + VAR_3;
  FUNC_4(VAR_10, VAR_11);
 }
 return -VAR_1;
}
