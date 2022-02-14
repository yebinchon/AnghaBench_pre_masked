
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ nfsnode_t ;



__attribute__((used)) static void
FUNC_0(nfsnode_t VAR_0, nfsnode_t VAR_1, nfsnode_t VAR_2, nfsnode_t VAR_3, nfsnode_t *VAR_4, int *VAR_5)
{
 nfsnode_t VAR_6[2], VAR_7[2];
 int VAR_8, VAR_9, VAR_10, VAR_11;


 VAR_6[0] = (VAR_0 > VAR_1) ? VAR_0 : VAR_1;
 VAR_6[1] = (VAR_0 > VAR_1) ? VAR_1 : VAR_0;
 VAR_7[0] = (VAR_2 > VAR_3) ? VAR_2 : VAR_3;
 VAR_7[1] = (VAR_2 > VAR_3) ? VAR_3 : VAR_2;
 for (VAR_8 = VAR_9 = VAR_10 = VAR_11 = 0; VAR_10 < 4; VAR_10++) {
  if (VAR_8 >= 2)
   VAR_4[VAR_11] = VAR_7[VAR_9++];
  else if ((VAR_9 >= 2) || (VAR_6[VAR_8] >= VAR_7[VAR_9]))
   VAR_4[VAR_11] = VAR_6[VAR_8++];
  else
   VAR_4[VAR_11] = VAR_7[VAR_9++];
  if ((VAR_11 <= 0) || (VAR_4[VAR_11] != VAR_4[VAR_11-1]))
   VAR_11++;
 }
 if (VAR_4[VAR_11-1] == ((void*)0))
  VAR_11--;
 *VAR_5 = VAR_11;
}
