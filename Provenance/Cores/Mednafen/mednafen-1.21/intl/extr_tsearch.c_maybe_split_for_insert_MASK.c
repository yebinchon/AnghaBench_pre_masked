
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* node ;
struct TYPE_5__ {int red; struct TYPE_5__* left; struct TYPE_5__* right; } ;



__attribute__((used)) static void
FUNC_0 (node *VAR_0, node *VAR_1, node *VAR_2,
                        int VAR_3, int VAR_4, int VAR_5)
{
  node VAR_6 = *VAR_0;
  node *VAR_7, *VAR_8;
  VAR_7 = &(*VAR_0)->right;
  VAR_8 = &(*VAR_0)->left;


  if (VAR_5 == 1
      || ((*VAR_7) != ((void*)0) && (*VAR_8) != ((void*)0) && (*VAR_7)->red && (*VAR_8)->red))
    {

      VAR_6->red = 1;
      if (*VAR_7)
        (*VAR_7)->red = 0;
      if (*VAR_8)
        (*VAR_8)->red = 0;



      if (VAR_1 != ((void*)0) && (*VAR_1)->red)
        {
          node VAR_9 = *VAR_2;
          node VAR_10 = *VAR_1;





          if ((VAR_3 > 0) != (VAR_4 > 0))
            {


              VAR_10->red = 1;
              VAR_9->red = 1;
              VAR_6->red = 0;
              if (VAR_3 < 0)
                {

                  VAR_10->left = *VAR_7;
                  *VAR_7 = VAR_10;
                  VAR_9->right = *VAR_8;
                  *VAR_8 = VAR_9;
                }
              else
                {

                  VAR_10->right = *VAR_8;
                  *VAR_8 = VAR_10;
                  VAR_9->left = *VAR_7;
                  *VAR_7 = VAR_9;
                }
              *VAR_2 = VAR_6;
            }
          else
            {
              *VAR_2 = *VAR_1;


              VAR_10->red = 0;
              VAR_9->red = 1;
              if (VAR_3 < 0)
                {

                  VAR_9->left = VAR_10->right;
                  VAR_10->right = VAR_9;
                }
              else
                {

                  VAR_9->right = VAR_10->left;
                  VAR_10->left = VAR_9;
                }
            }
        }
    }
}
